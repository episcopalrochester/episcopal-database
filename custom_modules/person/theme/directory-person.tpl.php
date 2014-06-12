<div class="person">
<h3 style="text-decoration: underline;"><?php print person_get_full_name($person); ?></h3>
<?php if ($partnerships = find_relationships(array_filter(array_keys(partnership_types())),$person,FALSE)): $partnership = $partnerships[0]; ?>
<h4>Partnership</h4>
<?php $lang = $partnership['node']->language;
?>
  <p><?php $type = "Personal relationship with ";
switch($partnership['node']->field_pr_type[$lang][0]['value']) {
case "marriage":
$type = "Married to ";
  break;
case "partnership":
  $type = "Partnered with ";
  break;
case "cohabitate":
  $type = "Cohabitating with ";
  break;
case  "sibling":
  $type = "Sibling to ";
  break;
case "parent":
  $type = "Parent/child to ";
  break;
}; ?><?php
if ($partnership['relative']) {  
  print $type.person_get_full_name($partnership['relative']);
}
elseif (isset($partnership['node']->field_person_2_nr['und'][0]['value'])) {
  print $type.$partnership['node']->field_person_2_nr['und'][0]['value'];
}
else {
  $type = explode(" ",$type); print $type[0];
}
?></p>
<?php endif; ?>
<?php if ($jobs = find_pro_relationships(array_filter(array_keys(pro_relationship_types())),$person,FALSE)): ?>
<h4>Jobs</h4>
<?php foreach ($jobs as $job): ?>
<?php $lang = $job['node']->language;
?>
  <p><?php $type = "Employed at ";
$types = pro_relationship_types();
if (isset($job['node']->field_pf_job[$lang][0]['value'])) {
  $type = $job['node']->field_pf_job[$lang][0]['value'].", ";
}
else {
$type = $types[$job['node']->field_pf_type[$lang][0]['value']].", ";
}
  if ($job['relative']) {
      print $type.$job['relative']->title;
  }
  elseif (isset($job['node']->field_org_nr['und'][0]['value'])) {
      print $type.$job['node']->field_org_nr['und'][0]['value'];
  }
  else {
      $type = explode(" ",$type); print $type[0];
  }
?></p>
<?php endforeach; ?>
<?php endif; ?>
<?php $home = person_get_address($person,'home');
if ($home['line1'] || $home['line2'] || $home['city'] || $home['state'] || $home['other']): ?>
<h4>Home Address</h4>
<p>
<?php if ($home['line1']): ?>
<?php print $home['line1']; ?><br />
<?php endif; ?>
<?php if ($home['line2']): ?>
<?php print $home['line2']; ?><br />
<?php endif; ?>
<?php if ($home['city']): ?>
<?php print $home['city']; ?>,&nbsp;
<?php endif; ?>
<?php if ($home['state']): ?>
<?php print $home['state']; ?><br />
<?php endif; ?>
<?php if ($home['other']): ?>
<?php print $home['other']; ?><br />
<?php endif; ?>
<?php if ($home['postal']): ?>
<?php print $home['postal']; ?>
<?php endif; ?>
</p>
<?php endif; ?>

<?php $mail = person_get_address($person,'mail'); 
if ($mail['line1'] || $mail['line2'] || $mail['city'] || $mail['state'] || $mail['other']): ?>
<h4>Mailing Address</h4>
<p>
<?php if ($mail['line1']): ?>
<?php print $mail['line1']; ?><br />
<?php endif; ?>
<?php if ($mail['line2']): ?>
<?php print $mail['line2']; ?><br />
<?php endif; ?>
<?php if ($mail['city']): ?>
<?php print $mail['city']; ?>,&nbsp;
<?php endif; ?>
<?php if ($mail['state']): ?>
<?php print $mail['state']; ?><br />
<?php endif; ?>
<?php if ($mail['other']): ?>
<?php print $mail['other']; ?><br />
<?php endif; ?>
<?php if ($mail['postal']): ?>
<?php print $mail['postal']; ?>
<?php endif; ?>
</p>
<?php endif; ?>
<table width="100%" border="0" style="border: 0px;">
<tr>
<td style="padding: 0px;">
<?php $pref_phone = person_get_phone($person,"pref");
$other_phone = person_get_phone($person,"other");
if ($pref_phone['number'] || $other_phone['number']): ?>
<h4 style="margin-top: 0px;">Phone</h4>
<?php if ($pref_phone['number']): ?>
<p><strong>Preferred: </strong><?php print $pref_phone['number']; ?>
<?php if ($pref_phone['type']): ?>
&nbsp;(<?php print $pref_phone['type']; ?>)
<?php endif; ?>
</p>
<?php endif; ?>
<?php if ($other_phone['number']): ?>
  <p><strong>Other: </strong><?php print $other_phone['number']; ?>
<?php if ($other_phone['type']): ?>
  &nbsp;(<?php print $other_phone['type']; ?>)
<?php endif; ?>
</p>
<?php endif; ?>

<?php endif; ?>
</td>
<td style="padding: 0px;">
<?php $pref_email = person_get_email($person,"pref");
$other_email = person_get_email($person,"other");
if ($pref_email['addy'] || $other_email['addy']): ?>
<h4 style="margin-top: 0px;">E-Mail</h4>
<?php if ($pref_email['addy']): ?>
<p><strong>Preferred: </strong><?php print l($pref_email['addy'],"mailto:".$pref_email['addy']); ?>
<?php if ($pref_email['type']): ?>
&nbsp;(<?php print $pref_email['type']; ?>)
<?php endif; ?>
</p>
<?php endif; ?>
<?php if ($other_email['addy']): ?>
  <p><strong>Other: </strong><?php print l($other_email['addy'],"mailto:".$other_email['addy']); ?>
<?php if ($other_email['type']): ?>
  &nbsp;(<?php print $other_email['type']; ?>)
<?php endif; ?>
</p>
<?php endif; ?>

<?php endif; ?>
</td>
</tr>
</table>
<hr />
</div>

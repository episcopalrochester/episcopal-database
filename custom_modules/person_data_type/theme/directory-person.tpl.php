<h3 style="text-decoration: underline;"><?php print person_data_type_get_full_name($person); ?></h3>
<?php $home = person_data_type_get_address($person,'home');
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

<?php $mail = person_data_type_get_address($person,'mail'); 
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
<?php $pref_phone = person_data_type_get_phone($person,"pref");
$other_phone = person_data_type_get_phone($person,"other");
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
<?php $pref_email = person_data_type_get_email($person,"pref");
$other_email = person_data_type_get_email($person,"other");
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
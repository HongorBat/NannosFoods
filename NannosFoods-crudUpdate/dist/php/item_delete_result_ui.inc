<?php

function item_delete_result_ui($message)
{
  //----------------------------------------------------------
  // Start the html page
  echo "<HTML>";
  echo "<HEAD>";
  echo "</HEAD>";
  echo "<BODY>";

  // If the message is non-null and not an empty string print it
  // message contains the lastname and firstname
  if ($message)
  {
    if ($message != "")
       {
	 echo '<center><font color="blue">'.$message.'</font></center><br />';
       }
  }

//finish up the html code, and put the return button to go back to main menu
echo <<<UPTOEND
  <BR/><BR/>
  <center>
  <input type="button" value="Return to Main Menu" 
	onClick="window.location='index.html'"/>
  </center>
UPTOEND;

 echo "</BODY>";
 echo "</HTML>";
}
?>

let component = ReasonReact.statelessComponent("IssueAdd");

let make = _children => {
  ...component,
  render: _self =>
    <form className="form">
      <input type_="text" name="owner" placeholder="Owner" />
      <input type_="text" name="title" placeholder="Title" />
      <button> {ReasonReact.string("Add")} </button>
    </form>,
};
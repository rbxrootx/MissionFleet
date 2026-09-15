// Exact recovered allocator/runtime support bridge.
extern "C" int State00687214;
extern "C" void Call00471E00();
extern "C" void Call00471E50();
extern "C" void *Import0067DA40;
extern "C" __declspec(naked) void Recovered00466390()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm cmp dword ptr [State00687214], 1
    __asm jne report
    __asm call Call00471E00
    __asm report:
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm call Call00471E50
    __asm add esp, 4
    __asm push 255
    __asm call dword ptr [Import0067DA40]
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}

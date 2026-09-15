// Exact recovered allocator/runtime support bridge.
extern "C" int State005DED2C;
extern "C" void Call004B9CD0();
extern "C" void Call004B9D20();
extern "C" void *Import005D12E0;
extern "C" __declspec(naked) void Recovered004ACD40()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm cmp dword ptr [State005DED2C], 1
    __asm jne report
    __asm call Call004B9CD0
    __asm report:
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm call Call004B9D20
    __asm add esp, 4
    __asm push 255
    __asm call dword ptr [Import005D12E0]
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}

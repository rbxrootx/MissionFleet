// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550DDD .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00550ddd_00550DDD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 6fh
        push 5cf7b8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 6C A3 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 18 22 FE FF: call 0x533017
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

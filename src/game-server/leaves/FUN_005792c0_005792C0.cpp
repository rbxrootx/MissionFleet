// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005792C0 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_005792c0_005792C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cba9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 583284h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 EE DB F8 FF: call 0x506ee6
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xdb
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B9 44 F1 FF: call 0x48d7c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x44
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

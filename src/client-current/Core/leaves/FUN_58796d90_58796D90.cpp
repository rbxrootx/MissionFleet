// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58796D90 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_58796d90_58796D90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 3B: je 0x58796ddd
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 55 01 CF FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 8C D0 FF: call 0x5849fa30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

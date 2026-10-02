// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585071C0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_585071c0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 3B: je 0x5850720d
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
        ; Exact mapped bytes E8 F5 D8 FF FF: call 0x58504ae0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd8
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 24 C5 F9 FF: call 0x584a3730
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

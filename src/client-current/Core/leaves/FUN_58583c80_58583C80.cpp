// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58583C80 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_58583c80_58583C80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588aa970h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1db4h], 0
        ; Exact mapped bytes 74 27: je 0x58583cc5
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1db4h]
        mov dword ptr [ebp - 0ch], eax
        push 14h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 7F D3 2A 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd3
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1db4h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1db8h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x58583cee
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x58583cf5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 3F 24 00: call 0x587c7c00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3f
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

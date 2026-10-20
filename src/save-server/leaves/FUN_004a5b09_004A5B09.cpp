// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5B09 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_004a5b09_004A5B09() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 17: je 0x4a5b2d
        __asm _emit 0x74
        __asm _emit 0x17
        push 10h
        mov eax, dword ptr [ebp - 4]
        add eax, 88h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D6 F7 FB FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 15: je 0x4a5b48
        __asm _emit 0x74
        __asm _emit 0x15
        push 10h
        mov edx, dword ptr [ebp - 4]
        add edx, 78h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 BB F7 FB FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

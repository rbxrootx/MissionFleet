// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A409 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_0056a409_0056A409() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 1
        push 10h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 44 90 F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56a43a
        __asm _emit 0x75
        __asm _emit 0x14
        push 13dh
        push 67c668h
        ; Exact mapped bytes E8 0B E9 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a43a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x56a415
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 29: je 0x56a472
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 21: jne 0x56a472
        __asm _emit 0x75
        __asm _emit 0x21
        lea ecx, [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 74 C2 68 00: call dword ptr [0x68c274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0E: jne 0x56a472
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 43 F5 FF FF: call 0x5699b5
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

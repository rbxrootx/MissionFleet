// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005239BE .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_005239be_005239BE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 05: jne 0x5239d8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x523a68
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5239fd
        __asm _emit 0x75
        __asm _emit 0x14
        push 117h
        push 5c8174h
        ; Exact mapped bytes E8 08 10 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5239fd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5239d8
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E 96 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x523a23
        __asm _emit 0x75
        __asm _emit 0x14
        push 118h
        push 5c8174h
        ; Exact mapped bytes E8 E2 0F 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x523a23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x523a03
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 08 96 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 18: je 0x523a52
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 468h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 81 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x523a68
        __asm _emit 0xeb
        __asm _emit 0x16
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 46dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 81 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

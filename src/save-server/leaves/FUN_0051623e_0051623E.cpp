// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051623E .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_0051623e_0051623E() {
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
        ; Exact mapped bytes 75 05: jne 0x516258
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x5162e8
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51627d
        __asm _emit 0x75
        __asm _emit 0x14
        push 117h
        push 674cach
        ; Exact mapped bytes E8 C8 2A 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51627d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x516258
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0E 68 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5162a3
        __asm _emit 0x75
        __asm _emit 0x14
        push 118h
        push 674cach
        ; Exact mapped bytes E8 A2 2A 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5162a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x516283
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E8 67 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 18: je 0x5162d2
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 468h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 53 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x5162e8
        __asm _emit 0xeb
        __asm _emit 0x16
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 46dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 53 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x53
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

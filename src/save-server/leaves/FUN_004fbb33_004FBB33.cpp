// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FBB33 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_004fbb33_004FBB33() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 475h
        push 674fe8h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 0E E7 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 68 03 00: call 0x5323de
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4fbb72
        __asm _emit 0x74
        __asm _emit 0x14
        push 476h
        push 674fe8h
        ; Exact mapped bytes E8 D3 D1 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fbb72
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4fbb52
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0E A7 FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 2000000h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4fbb9d
        __asm _emit 0x74
        __asm _emit 0x14
        push 477h
        push 674fe8h
        ; Exact mapped bytes E8 A8 D1 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fbb9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4fbb78
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E2 01 03 00: call 0x52bd8d
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 59 10 02 00: call 0x51cc0c
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x4fbbda
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 5a0049h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DF 66 03 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C0 66 03 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3A 9B 03 00: call 0x535740
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x4fbc1d
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FC 01 03 00: call 0x52be25
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x03
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

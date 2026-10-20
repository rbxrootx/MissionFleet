// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551330 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_00551330_00551330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 11fh
        push 5cf7b8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 11 9E FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x9e
        __asm _emit 0xfa
        __asm _emit 0xff
        push 120h
        push 5cf7b8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 FE 9D FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D DA F9 FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0xf9
        __asm _emit 0xff
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x55138f
        __asm _emit 0x74
        __asm _emit 0x15
        push 0
        push 0
        push 0bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 A8 FE FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x5513bc
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 09 E3 00 00: call 0x55f6bb
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 77 1B 00 00: call 0x552f33
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x5513d0
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        push 1
        push 0bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 A8 FE FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5513fa
        __asm _emit 0x74
        __asm _emit 0x14
        push 137h
        push 5cf7b8h
        ; Exact mapped bytes E8 0B 36 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5513fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x5513d0
        __asm _emit 0x75
        __asm _emit 0xd0
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

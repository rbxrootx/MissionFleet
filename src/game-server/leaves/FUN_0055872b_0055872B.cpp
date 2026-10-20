// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055872B .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_0055872b_0055872B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 0deh
        push 5cfe58h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 16 2A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x558767
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dfh
        push 5cfe58h
        ; Exact mapped bytes E8 9E C2 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558767
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55874a
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0e0h
        push 5cfe58h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E0 29 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x29
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EE E2 FF FF: call 0x556a7a
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 66 A1 14 EC 5D 00: mov ax, word ptr [0x5dec14]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 9F 00 00: call 0x562797
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 84 E8 FF FF: call 0x557039
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 15 20 EC 5D 00: mov dx, word ptr [0x5dec20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 9F 00 00: call 0x562797
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 69 E4 FF FF: call 0x556c40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x55882c
        __asm _emit 0x74
        __asm _emit 0x4f
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 E5 FF FF: call 0x556dde
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x55882c
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 66 A1 1C EC 5D 00: mov ax, word ptr [0x5dec1c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 9F 00 00: call 0x562797
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 23 E8 FF FF: call 0x557039
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 15 24 EC 5D 00: mov dx, word ptr [0x5dec24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 9F 00 00: call 0x562797
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DD50 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_0047dd50_0047DD50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 44 75 68 00 00: cmp dword ptr [0x687544], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x47de1c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4ah
        push 63f4a8h
        push 2
        push 30h
        push 1
        ; Exact mapped bytes E8 AD 8E FE FF: call 0x466c20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0A: jne 0x47dd89
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x47de7c
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EE 00 00 00: call 0x47de80
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x47ddbd
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 6E 03 00 00: call 0x47e110
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 B0 95 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x47de7c
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 60 10 68 00: mov ecx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 60 10 68 00: mov ecx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 60 10 68 00: mov ecx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 60 10 68 00: mov dword ptr [0x681060], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 84 75 68 00: mov ecx, dword ptr [0x687584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 14 03 00 00: call 0x47e110
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        ; Exact mapped bytes 8B 15 84 75 68 00: mov edx, dword ptr [0x687584]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 53 95 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 84 75 68 00: mov dword ptr [0x687584], eax
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 60: jmp 0x47de7c
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 60 10 68 00: mov ecx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 89 15 30 10 68 00: mov dword ptr [0x681030], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 60 10 68 00: mov eax, dword ptr [0x681060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 89 0D 34 10 68 00: mov dword ptr [0x681034], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 60 10 68 00: mov edx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes A3 38 10 68 00: mov dword ptr [0x681038], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 60 10 68 00 30 10 68 00: mov dword ptr [0x681060], 0x681030
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 84 75 68 00: mov ecx, dword ptr [0x687584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 B4 02 00 00: call 0x47e110
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        ; Exact mapped bytes 8B 15 84 75 68 00: mov edx, dword ptr [0x687584]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 F3 94 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 84 75 68 00 00 00 00 00: mov dword ptr [0x687584], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}

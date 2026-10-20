// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588368DA .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_588368da_588368DA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        ; Exact mapped bytes E8 5C 59 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 248h
        push eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 1E 2D 02 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 11: jne 0x5883690a
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], 15h
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x58836a47
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        push esi
        ; Exact mapped bytes FF 15 00 41 89 58: call dword ptr [0x58894100]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 6fh
        ; Exact mapped bytes 75 27: jne 0x58836941
        __asm _emit 0x75
        __asm _emit 0x27
        push esi
        ; Exact mapped bytes E8 E0 2C 02 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        push dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 2C 02 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 11: jne 0x58836941
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push -2
        mov dword ptr [eax], 16h
        pop eax
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x58836a47
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        push esi
        ; Exact mapped bytes FF 15 00 41 89 58: call dword ptr [0x58894100]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x58836a40
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f1f94h
        ; Exact mapped bytes E8 F5 59 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        add esi, 84h
        push esi
        ; Exact mapped bytes E8 3D F9 02 00: call 0x588662a8
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x58836a16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f1fa4h
        ; Exact mapped bytes E8 D3 59 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes E8 21 F9 02 00: call 0x588662a8
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58836a16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f1fb4h
        ; Exact mapped bytes E8 B7 59 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes E8 E3 FD 02 00: call 0x58866786
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 6C: jne 0x58836a16
        __asm _emit 0x75
        __asm _emit 0x6c
        push 588f1fd8h
        ; Exact mapped bytes E8 9F 59 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes E8 ED F8 02 00: call 0x588662a8
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x588369ea
        __asm _emit 0x74
        __asm _emit 0x28
        push 588f1fe4h
        ; Exact mapped bytes E8 87 59 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes E8 B3 FD 02 00: call 0x58866786
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x588369ea
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push -3
        mov dword ptr [eax], 7bh
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x5883693b
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x58836a0f
        __asm _emit 0x74
        __asm _emit 0x1c
        push 588f1ff4h
        ; Exact mapped bytes E8 56 59 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 7E 36 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 2
        ; Exact mapped bytes E9 25 FF FF FF: jmp 0x5883693b
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x58836a3b
        __asm _emit 0x74
        __asm _emit 0x1c
        push 588f1fc4h
        ; Exact mapped bytes E8 2A 59 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 52 36 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 07: jmp 0x58836a47
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E8 15 58 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424DB0 .. +0x1AD bytes.
extern "C" __declspec(naked) void FUN_00424db0_00424DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 70h]
        mov ecx, 1ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0ffffffffh
        push 28h
        push 0
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 DF 0A 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 85 C9 FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x424ebd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 28h
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 83 C4 FD FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x424eb6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 1
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x424eaf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 28h
        push 0
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 86 0A 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], 0
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 63310ch
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 8D FF 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 63310ch
        lea ecx, [ebp - 23h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 6E FF 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        push 28h
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 6F C7 FD FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x424ea8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x424f4a
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x424f4a
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x424f4a
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x424f4a
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x424f48
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 28h
        push 0
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 EC 09 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], 0
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        push 63310ch
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 F3 FE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 63310ch
        lea eax, [ebp - 23h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 D4 FE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        push 28h
        lea ecx, [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 53 CB FD FF: call 0x401a87
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 07: je 0x424f44
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 06: jmp 0x424f4a
        __asm _emit 0xeb
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x424f4a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 70h
        cmp ebp, esp
        ; Exact mapped bytes E8 99 FE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

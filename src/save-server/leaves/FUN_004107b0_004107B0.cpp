// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004107B0 .. +0x27D bytes.
extern "C" __declspec(naked) void FUN_004107b0_004107B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58acb9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 174h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 180h]
        mov ecx, 5dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 E1 C9 09 00: call 0x4ad1d7
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 83 09 02 00 00: jae 0x410a08
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 00 45 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 B0 9B 09 00: call 0x4aa3d0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 84 CC 01 00 00: je 0x4109f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 1
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 24h], 3ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 38h], ecx
        lea edx, [ebp - 140h]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 34h], 1
        push 0
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 0f4h
        ; Exact mapped bytes E8 30 C8 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 02 CA 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 3
        mov ecx, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ecx + 158h]
        ; Exact mapped bytes E8 F2 0F FF FF: call 0x401884
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push eax
        push 633e1ch
        lea edx, [ebp - 140h]
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
        ; Exact mapped bytes E8 3F 45 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 140h]
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 B3 C9 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 4
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 0f8h], 0
        ; Exact mapped bytes 74 20: je 0x4108ff
        __asm _emit 0x74
        __asm _emit 0x20
        mov esi, esp
        push 633e24h
        lea eax, [ebp - 140h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 F3 44 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x41091d
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov esi, esp
        push 633e14h
        lea ecx, [ebp - 140h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 D3 44 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        lea edx, [ebp - 140h]
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 47 C9 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 5
        push 0
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 0fch
        ; Exact mapped bytes E8 49 C7 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc7
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 63310ch
        mov ecx, dword ptr [ebp - 28h]
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
        ; Exact mapped bytes E8 85 44 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 02 C9 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 7
        mov esi, esp
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 168h]
        push ecx
        push 633e1ch
        mov edx, dword ptr [ebp - 28h]
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
        ; Exact mapped bytes E8 47 44 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 C4 C8 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 8
        mov esi, esp
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 16ch]
        push edx
        push 633e1ch
        mov eax, dword ptr [ebp - 28h]
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
        ; Exact mapped bytes E8 09 44 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 86 C8 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E4 BE 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbe
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 180h
        cmp ebp, esp
        ; Exact mapped bytes E8 C9 43 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

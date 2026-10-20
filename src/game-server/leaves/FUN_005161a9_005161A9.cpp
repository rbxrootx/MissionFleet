// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005161A9 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_005161a9_005161A9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 46h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 C0 25 5E 00: call dword ptr [0x5e25c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5161d9
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x5162ed
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 70 FB 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C2 5E 02 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6E FC 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 63: je 0x516281
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 400h
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x516281
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 2B 05 A8 E8 5D 00: sub eax, dword ptr [0x5de8a8]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B4 FD 01 00: call 0x535ffd
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 46 63 02 00: call 0x53c59d
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 2B 0D A8 E8 5D 00: sub ecx, dword ptr [0x5de8a8]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8A FD 01 00: call 0x535ffd
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1C 63 02 00: call 0x53c59d
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 64: je 0x5162ed
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 64h]
        and edx, 800h
        test edx, edx
        ; Exact mapped bytes 74 54: je 0x5162ed
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 2B 15 AC E8 5D 00: sub edx, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 48 FD 01 00: call 0x535ffd
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DA 62 02 00: call 0x53c59d
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 2B 05 AC E8 5D 00: sub eax, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1E FD 01 00: call 0x535ffd
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B0 62 02 00: call 0x53c59d
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

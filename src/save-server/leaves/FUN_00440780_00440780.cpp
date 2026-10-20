// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440780 .. +0x1EC bytes.
extern "C" __declspec(naked) void FUN_00440780_00440780() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bef2h
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
        sub esp, 50h
        mov dword ptr [ebp - 50h], ecx
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 50h]
        add eax, 8
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], 0
        mov dword ptr [ebp - 4], 0
        mov edx, 8
        test edx, edx
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x440923
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        cmp eax, 80h
        ; Exact mapped bytes 76 12: jbe 0x4407fb
        __asm _emit 0x76
        __asm _emit 0x12
        push 8
        ; Exact mapped bytes E8 70 BC 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x44091b
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        sub ecx, 1
        shr ecx, 3
        lea edx, [ecx*4 + 685054h]
        mov dword ptr [ebp - 20h], edx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x440826
        __asm _emit 0x74
        __asm _emit 0x0d
        push 685094h
        ; Exact mapped bytes E8 DD 1D FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0F: je 0x440847
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x4408f2
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 8
        mov dword ptr [ebp - 34h], 14h
        mov eax, dword ptr [ebp - 44h]
        add eax, 7
        and al, 0f8h
        mov dword ptr [ebp - 44h], eax
        lea ecx, [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 F3 4F FF FF: call 0x435860
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 34h], 1
        ; Exact mapped bytes 75 08: jne 0x440881
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 71: jmp 0x4408f2
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 44h]
        sub ecx, 1
        shr ecx, 3
        lea edx, [ecx*4 + 685054h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 38h], 1
        ; Exact mapped bytes EB 09: jmp 0x4408bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, 1
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 75 0B: jne 0x4408e2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx], 0
        ; Exact mapped bytes EB 0A: jmp 0x4408ec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB C8: jmp 0x4408b4
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x440915
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 48h], 685094h
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x44092a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        add edx, 8
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 4]
        mov byte ptr [edx], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

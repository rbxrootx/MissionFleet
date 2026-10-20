// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874EEA .. +0x155 bytes.
extern "C" __declspec(naked) void FUN_58874eea_58874EEA() {
    __asm {
        mov edi, edi
        push ebx
        mov ebx, esp
        push ecx
        push ecx
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 238h
        push esi
        push edi
        push dword ptr [ebx + 14h]
        push dword ptr [ebx + 10h]
        ; Exact mapped bytes E8 2B 01 00 00: call 0x5887503f
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebx + 8]
        ; Exact mapped bytes E8 55 FD FF FF: call 0x58874c71
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 10h]
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ecx + 48h]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 07: jne 0x58874f34
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x58875036
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 220h
        ; Exact mapped bytes E8 92 7F FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x58874f54
        __asm _emit 0x75
        __asm _emit 0x0e
        push eax
        ; Exact mapped bytes E8 C4 7C FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x58875035
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 10h]
        lea edi, [ebp - 238h]
        mov edx, 88h
        mov ecx, edx
        push eax
        mov esi, dword ptr [esi + 48h]
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        lea esi, [ebp - 238h]
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        and dword ptr [eax], 0
        ; Exact mapped bytes E8 B9 01 00 00: call 0x5887513a
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        or esi, 0ffffffffh
        pop ecx
        pop ecx
        cmp edi, esi
        ; Exact mapped bytes 75 1B: jne 0x58874fa7
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 DE D4 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 70 7C FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58875035
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebx + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x58874fb2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 22 41 FF FF: call 0x588690d4
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 10h]
        mov eax, dword ptr [eax + 48h]
        ; Exact mapped bytes F0 0F C1 30: lock xadd dword ptr [eax], esi
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x30
        dec esi
        ; Exact mapped bytes 75 15: jne 0x58874fd4
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebx + 10h]
        cmp dword ptr [eax + 48h], 58907808h
        ; Exact mapped bytes 74 09: je 0x58874fd4
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [eax + 48h]
        ; Exact mapped bytes E8 3D 7C FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [ecx + 48h], eax
        mov ecx, dword ptr [ebx + 10h]
        ; Exact mapped bytes A1 04 78 90 58: mov eax, dword ptr [0x58907804]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x90
        __asm _emit 0x58
        test dword ptr [ecx + 350h], eax
        ; Exact mapped bytes 75 39: jne 0x5887502c
        __asm _emit 0x75
        __asm _emit 0x39
        lea eax, [ebx + 10h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 5]
        push 5
        lea eax, [ebx + 14h]
        mov dword ptr [ebp - 10h], eax
        pop eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 47 FB FF FF: call 0x58874b63
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [ebx + 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x5887502c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebx + 14h]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes A3 1C 75 90 58: mov dword ptr [0x5890751c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 DD 7B FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edi
        pop ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00405430 .. +0x1C0 bytes.
extern "C" __declspec(naked) void FUN_00405430_00405430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 CE C2 FF FF: call 0x401726
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 FB BE FF FF: call 0x401361
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E 6D 01 00 00: jle 0x4055db
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C9 02 06 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 B5 01 06 00: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        push 4
        push 6330b8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A2 02 06 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        add ecx, eax
        push ecx
        ; Exact mapped bytes E8 91 01 06 00: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 85 02 06 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        add eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x4055b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov byte ptr [eax + edx], 27h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 BF FF FF: call 0x4014f1
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 42 02 06 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E7 BF FF FF: call 0x4014f1
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 0ch]
        push ecx
        ; Exact mapped bytes E8 E3 FD 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C9 BF FF FF: call 0x4014f1
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 12 02 06 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        add edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov byte ptr [edx + ecx], 27h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A4 BF FF FF: call 0x40150a
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 21: je 0x405590
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov byte ptr [eax + edx], 2ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 1F: jmp 0x4055af
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov byte ptr [ecx + eax], 29h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E9 13 FF FF FF: jmp 0x4054c7
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov byte ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes EB 02: jmp 0x4055dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 06 F8 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

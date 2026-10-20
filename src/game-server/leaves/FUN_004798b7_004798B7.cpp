// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004798B7 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_004798b7_004798B7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 420h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 420h]
        mov ecx, 108h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 420h], ecx
        mov dword ptr [ebp - 414h], 7fh
        mov dword ptr [ebp - 418h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 41ch], ecx
        lea edx, [ebp - 414h]
        push edx
        lea eax, [ebp - 418h]
        push eax
        lea ecx, [ebp - 41ch]
        push ecx
        ; Exact mapped bytes E8 A7 9E F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x4799af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 190h]
        push eax
        mov ecx, dword ptr [ebp - 420h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 84 09 F9 FF: call 0x40a2c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x4799af
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        ; Exact mapped bytes 66 8B 84 10 E4 6B 01 00: mov ax, word ptr [eax + edx + 0x16be4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0xe4
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 F8 FB FF FF: mov word ptr [ebp - 0x408], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 404h], 1
        mov dword ptr [ebp - 40ch], 80020400h
        mov byte ptr [ebp - 400h], 40h
        sub esp, 410h
        mov ecx, 104h
        lea esi, [ebp - 410h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 190h]
        push edx
        mov eax, dword ptr [ebp - 420h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 31 09 F9 FF: call 0x40a2e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 420h
        cmp ebp, esp
        ; Exact mapped bytes E8 22 EE 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xee
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

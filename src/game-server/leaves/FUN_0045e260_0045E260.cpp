// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E260 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_0045e260_0045E260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 4
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 10h], ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 61 03 00 00: call 0x45e600
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 09 3A FE FF: call 0x441cb0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x45e300
        __asm _emit 0x74
        __asm _emit 0x50
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F8 00 00 00: call 0x45e3b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        mov edx, dword ptr [ebp - 24h]
        add edx, 14h
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C2 02 00 00: call 0x45e5c0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x45e334
        __asm _emit 0xeb
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [edx]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 98 04 00 00: call 0x45e7b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        pop edi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 A1 A4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

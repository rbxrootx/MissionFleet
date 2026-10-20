// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D330 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_0047d330_0047D330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 96 09 00 00: call 0x47dcf0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x47d394
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 87 09 00 00: call 0x47dd00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 31 09 00 00: call 0x47dcc0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 4F: jmp 0x47d3e3
        __asm _emit 0xeb
        __asm _emit 0x4f
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 00 F8 FF FF: call 0x47cba0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2B 04 00 00: call 0x47d7e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2F F8 FF FF: call 0x47cbf0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 F7 FF FF: call 0x47cba0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 04 00 00: call 0x47d870
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 F3 B3 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb3
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

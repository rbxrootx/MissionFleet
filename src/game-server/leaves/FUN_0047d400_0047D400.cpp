// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D400 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_0047d400_0047D400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp + 10h]
        push ecx
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 E7 FC FF FF: call 0x47d110
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x47d482
        __asm _emit 0x74
        __asm _emit 0x50
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 06 FC FF FF: call 0x47d040
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 CD FC FF FF: call 0x47d110
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x47d482
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC 04 00 00: call 0x47d910
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], ecx
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 54 B3 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

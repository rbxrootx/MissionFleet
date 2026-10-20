// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C97A0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004c97a0_004C97A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 05: jae 0x4c97b9
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 87 FC FF FF: call 0x4c9440
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CF 00 00 00: call 0x4c9890
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        sub eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 0C: jae 0x4c97db
        __asm _emit 0x73
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp + 0ch], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 5B: jbe 0x4c983c
        __asm _emit 0x76
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 46 00 00 00: call 0x4c9850
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 49 46 F9 FF: call 0x45de70
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4c983c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D4 45 F9 FF: call 0x45de10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

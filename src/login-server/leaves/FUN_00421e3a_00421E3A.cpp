// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421E3A .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_00421e3a_00421E3A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        push edi
        ; Exact mapped bytes E8 7D 06 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 21: je 0x421e6d
        __asm _emit 0x74
        __asm _emit 0x21
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 C6 FF FF: call 0x41e4cd
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 73: jne 0x421ee0
        __asm _emit 0x75
        __asm _emit 0x73
        mov edi, dword ptr [ebp + 1ch]
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 4]
        push eax
        push edi
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 74 C7 FF FF: call 0x41e5f8
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 4F: jae 0x421ee0
        __asm _emit 0x73
        __asm _emit 0x4f
        cmp edi, dword ptr [esi]
        ; Exact mapped bytes 7C 43: jl 0x421ed8
        __asm _emit 0x7c
        __asm _emit 0x43
        cmp edi, dword ptr [esi + 4]
        ; Exact mapped bytes 7F 3E: jg 0x421ed8
        __asm _emit 0x7f
        __asm _emit 0x3e
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [esi + 10h]
        shl eax, 4
        add eax, ecx
        mov ecx, dword ptr [eax - 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x421eb2
        __asm _emit 0x74
        __asm _emit 0x06
        cmp byte ptr [ecx + 8], 0
        ; Exact mapped bytes 75 26: jne 0x421ed8
        __asm _emit 0x75
        __asm _emit 0x26
        push 1
        add eax, -10h
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push esi
        push 0
        push eax
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 01 00 00: call 0x421ff5
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        inc dword ptr [ebp - 4]
        add esi, 14h
        ; Exact mapped bytes EB A9: jmp 0x421e89
        __asm _emit 0xeb
        __asm _emit 0xa9
        pop edi
        pop esi
        leave
        ret
    }
}

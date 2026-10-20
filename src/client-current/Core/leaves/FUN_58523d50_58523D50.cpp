// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523D50 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_58523d50_58523D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 26: jne 0x58523d88
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 18h], edx
        ; Exact mapped bytes EB 49: jmp 0x58523dd1
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 73 0D FA FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes E8 88 83 F6 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 40 88 FC FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes E8 65 83 F6 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C7010 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_584c7010_584C7010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BB D9 FB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 7F 37 FE FF: call 0x584aa7b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 76 02 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 08 38 FE FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 06: jae 0x584c7056
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 1B 35 FE FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov cl, byte ptr [ebp - 2]
        mov byte ptr [ebp - 1], cl
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DC EC FF FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 00 00 00: call 0x584c7170
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        or edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C5F50 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_100c5f50_100C5F50() {
    __asm {
        push ebx
        mov ebx, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [ebx + 98h]
        test eax, eax
        ; Exact mapped bytes 7E 2E: jle 0x100c5f8e
        __asm _emit 0x7e
        __asm _emit 0x2e
        push esi
        lea esi, [ebx + 0e4h]
        mov ecx, dword ptr [esi]
        push 0ffh
        ; Exact mapped bytes E8 AD 91 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 101h
        ; Exact mapped bytes E8 E1 91 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 98h]
        inc edi
        add esi, 4
        cmp edi, eax
        ; Exact mapped bytes 7C DA: jl 0x100c5f67
        __asm _emit 0x7c
        __asm _emit 0xda
        pop esi
        mov eax, 51eb851fh
        mul dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 0ch]
        shr edx, 5
        mov ecx, dword ptr [ebx + eax*4 + 0e4h]
        push edx
        ; Exact mapped bytes E8 75 97 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CF8A0 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_584cf8a0_584CF8A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], 1505h
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584cf8bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 19 51 FB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x51
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 73 2A: jae 0x584cf8f6
        __asm _emit 0x73
        __asm _emit 0x2a
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 6C 64 FF FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 1], dl
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 5
        add eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [ebp - 1]
        add eax, ecx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB C0: jmp 0x584cf8b6
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], edx
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 2C A4 FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}

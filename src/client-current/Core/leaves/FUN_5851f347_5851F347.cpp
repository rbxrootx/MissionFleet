// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F347 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_5851f347_5851F347() {
    __asm {
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x5851f357
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 11h]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5851f368
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        or ecx, 2
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AC CF FE FF: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 A6 07 00 00: call 0x5851fb40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
    }
}

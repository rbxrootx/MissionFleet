// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C0D0 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5887c0d0_5887C0D0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov esi, dword ptr [ebp + 8]
        push dword ptr [esi]
        ; Exact mapped bytes E8 FD 80 FF FF: call 0x588741e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 45 83 FF FF: call 0x58874430
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 8]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes 66 0F 13 45 F8: movlpd qword ptr [ebp - 8], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 B4 FF FF FF: call 0x5887c0b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x5887c11a
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [esi]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 10: jne 0x5887c11a
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 4]
        xor eax, eax
        cmp ecx, dword ptr [ebp - 4]
        pop esi
        setne al
        mov esp, ebp
        pop ebp
        ret
        mov eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

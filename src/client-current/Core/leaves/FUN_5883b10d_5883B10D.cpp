// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B10D .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_5883b10d_5883B10D() {
    __asm {
        push 0ch
        mov eax, 58892a21h
        ; Exact mapped bytes E8 88 74 FF FF: call 0x588325a1
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, ecx
        mov dword ptr [ebp - 18h], esi
        mov edi, dword ptr [ebp + 8]
        or edi, 0fh
        cmp edi, -2
        ; Exact mapped bytes 76 05: jbe 0x5883b12e
        __asm _emit 0x76
        __asm _emit 0x05
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 2A: jmp 0x5883b158
        __asm _emit 0xeb
        __asm _emit 0x2a
        xor edx, edx
        mov dword ptr [ebp - 14h], 3
        mov eax, edi
        mov ebx, dword ptr [esi + 14h]
        div dword ptr [ebp - 14h]
        mov ecx, ebx
        shr ecx, 1
        cmp ecx, eax
        ; Exact mapped bytes 76 11: jbe 0x5883b158
        __asm _emit 0x76
        __asm _emit 0x11
        push -2
        pop eax
        sub eax, ecx
        cmp ebx, eax
        ; Exact mapped bytes 77 05: ja 0x5883b155
        __asm _emit 0x77
        __asm _emit 0x05
        lea edi, [ecx + ebx]
        ; Exact mapped bytes EB 03: jmp 0x5883b158
        __asm _emit 0xeb
        __asm _emit 0x03
        push -2
        pop edi
        and dword ptr [ebp - 4], 0
        lea eax, [edi + 1]
        push 1
        push 1
        push eax
        ; Exact mapped bytes E8 E1 F0 FF FF: call 0x5883a24a
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 2D: jmp 0x5883b19b
        __asm _emit 0xeb
        __asm _emit 0x2d
    }
}

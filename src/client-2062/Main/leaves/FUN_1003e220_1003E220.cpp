// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003E220 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_1003e220_1003E220() {
    __asm {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 20h
        lea edi, [edx + 8]
        mov dword ptr [edx], 10175914h
        mov dword ptr [edx + 88h], 40000000h
        ; Exact mapped bytes 66 C7 82 90 00 00 00 30 00: mov word ptr [edx + 0x90], 0x30
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 42 04: mov word ptr [edx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        mov dword ptr [edx + 8ch], eax
        mov dword ptr [edx + 94h], eax
        mov dword ptr [edx + 98h], eax
        mov dword ptr [edx + 9ch], eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, edx
        pop edi
        ret
    }
}

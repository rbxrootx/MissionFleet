// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588329D0 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_588329d0_588329D0() {
    __asm {
        push 4
        mov eax, 588927d3h
        ; Exact mapped bytes E8 5C FB FF FF: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        xor ebx, ebx
        lea ecx, [esi + 28h]
        ; Exact mapped bytes 66 89 1E: mov word ptr [esi], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x1e
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0ch], ebx
        mov dword ptr [esi + 10h], ebx
        mov dword ptr [esi + 14h], ebx
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 20h], ebx
        mov dword ptr [esi + 24h], ebx
        ; Exact mapped bytes E8 6B FF FF FF: call 0x58832974
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 20a4h]
        mov dword ptr [ebp - 4], ebx
        mov dword ptr [esi + 1470h], ebx
        mov dword ptr [esi + 2098h], ebx
        mov dword ptr [esi + 209ch], ebx
        mov dword ptr [esi + 20a0h], ebx
        ; Exact mapped bytes E8 2C FF FF FF: call 0x5883295b
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 22c4h]
        mov byte ptr [ebp - 4], 1
        mov dword ptr [esi + 22c0h], ebx
        ; Exact mapped bytes E8 7C A1 00 00: call 0x5883cbc0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 5b38h]
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E8 CD AE 00 00: call 0x5883d920
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 5b90h], ebx
        xor eax, eax
        mov dword ptr [esi + 5b94h], ebx
        mov byte ptr [esi + 5b98h], bl
        mov dword ptr [esi + 5b9ch], 3e8h
        mov dword ptr [esi + 5ba0h], ebx
        mov dword ptr [esi + 5ba4h], ebx
        mov dword ptr [esi + 5ba8h], ebx
        mov byte ptr [esi + 5bach], bl
        mov dword ptr [esi + 5bb0h], ebx
        mov dword ptr [esi + 5bb4h], ebx
        mov dword ptr [esi + 5bb8h], ebx
        mov dword ptr [esi + 5bbch], ebx
        mov dword ptr [esi + 5bd0h], ebx
        mov dword ptr [esi + 5bd4h], ebx
        mov byte ptr [esi + 5bd8h], bl
        ; Exact mapped bytes 66 89 86 98 18 00 00: mov word ptr [esi + 0x1898], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov byte ptr [esi + 1498h], bl
        mov byte ptr [esi + 1478h], bl
        mov byte ptr [esi + 20c0h], bl
        ; Exact mapped bytes E8 42 FA FF FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00531B06 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_00531b06_00531B06() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        add ecx, 2
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 28h]
        ; Exact mapped bytes 76 08: jbe 0x531b26
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 3B FD FF: call 0x50571f
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        add ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

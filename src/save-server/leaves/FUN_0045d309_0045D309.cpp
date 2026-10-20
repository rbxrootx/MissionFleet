// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D309 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_0045d309_0045D309() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes 66 8B 4D 1C: mov cx, word ptr [ebp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        push ecx
        ; Exact mapped bytes 66 8B 55 18: mov dx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        push edx
        ; Exact mapped bytes 66 8B 45 14: mov ax, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        push eax
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        push edx
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        push eax
        ; Exact mapped bytes E8 04 F0 FF FF: call 0x45c33b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

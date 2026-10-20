// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF66C .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004ff66c_004FF66C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 0fh]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 0eh]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 0dh]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 0bh]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 0ah]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 9]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        push edx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        push 5cb77ch
        lea ecx, [ebp - 100h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 34h
        lea edx, [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 E1 FE FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 104h]
        or al, 1
        mov dword ptr [ebp - 104h], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875F420 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_5875f420() {
    __asm {
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push esi
        push eax
        mov eax, dword ptr [esp + 28h]
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        mov edx, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        mov edx, dword ptr [esp + 24h]
        push eax
        push ecx
        xor ebx, ebx
        push ebx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 25 3E FD FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov dword ptr [esi + 78h], ebx
        mov dword ptr [esi + 7ch], ebx
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 74h], ebx
        mov byte ptr [esi + 80h], bl
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov dword ptr [esi], 5898da54h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 180h], ebx
        mov eax, esi
        pop esi
        pop ebx
        ret 28h
    }
}

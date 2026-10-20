// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B3B0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_0054b3b0_0054B3B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f419h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0C C9 FA FF: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 1A 01 00 00: call 0x54b500
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 5891e8h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 24h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 28h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 34h], 2
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 30h], 2710h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 38h], 1f40h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1ch], 0
        push 33h
        push 5ce570h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 11 FD FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

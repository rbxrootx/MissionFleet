// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005680F0 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_005680f0_005680F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58efb9h
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
        ; Exact mapped bytes E8 6C EC F6 FF: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2ch
        ; Exact mapped bytes E8 EA 16 00 00: call 0x569810
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63b9b4h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 28h], 0ah
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

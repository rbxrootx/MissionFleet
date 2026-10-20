// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516FAA .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_00516faa_00516FAA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d579h
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
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 637b18h
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 BF 54 FB FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 78h
        ; Exact mapped bytes E8 F0 58 FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 BC 7D FA FF: call 0x4bedc7
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 45 96 FB FF: call 0x4d065f
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x96
        __asm _emit 0xfb
        __asm _emit 0xff
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

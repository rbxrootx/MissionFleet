// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575555 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00575555_00575555() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57edb5h
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 587e8ch
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 C0 82 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 B1 82 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 A2 82 F7 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 43 B4 FB FF: call 0x5309fc
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb4
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

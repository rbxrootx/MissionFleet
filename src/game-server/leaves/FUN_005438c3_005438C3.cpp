// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005438C3 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_005438c3_005438C3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cccdh
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
        ; Exact mapped bytes E8 F9 43 FB FF: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x43
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 62 20 FF FF: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58336ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 54h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 00 00 00: call 0x543936
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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

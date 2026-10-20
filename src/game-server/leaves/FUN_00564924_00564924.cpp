// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564924 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_00564924_00564924() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 580262h
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
        ; Exact mapped bytes E8 58 56 FC FF: call 0x529fa0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x56
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 104h
        ; Exact mapped bytes E8 F4 13 FD FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 E6 13 FD FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58b454h
        push 14h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c0h
        push ecx
        ; Exact mapped bytes E8 E9 49 F4 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0c0h], 14h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0d8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 100h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 104h
        ; Exact mapped bytes E8 72 16 FD FF: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 64 16 FD FF: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 124h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0e4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0dch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0e0h], 0
        push 8ch
        push 5d0bb4h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 32 67 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x67
        __asm _emit 0xf9
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

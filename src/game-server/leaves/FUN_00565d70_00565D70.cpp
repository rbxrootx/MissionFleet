// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00565D70 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_00565d70_00565D70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5802c8h
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
        ; Exact mapped bytes E8 3C AC FE FF: call 0x5509d0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 5E B1 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a4h
        ; Exact mapped bytes E8 75 1D 00 00: call 0x567b30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a8h
        ; Exact mapped bytes E8 87 1D 00 00: call 0x567b50
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58b5ach
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 98h], 0
        push 26h
        push 5d0c78h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 30 53 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x53
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481D60 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_00481d60_00481D60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c323h
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
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 6fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 36 E7 06 00: call 0x4f04c7
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 62 8A 05 00: call 0x4da805
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 98h
        ; Exact mapped bytes E8 52 F1 0A 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 40 F1 0A 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 581d18h
        push 5dcbb8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 98h
        ; Exact mapped bytes E8 16 BD 06 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        push 5dcbbch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 03 BD 06 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbd
        __asm _emit 0x06
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
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 C8 69 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

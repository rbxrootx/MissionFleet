// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E640 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0040e640_0040E640() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43a183h
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
        mov eax, dword ptr [ebp + 8]
        push eax
        push 85h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9B 02 02 00: call 0x42e908
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 61 01 00 00: call 0x40e7e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 98h
        ; Exact mapped bytes E8 1F 5C FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 0D 5C FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43d1b8h
        push 44dbdch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 98h
        ; Exact mapped bytes E8 71 F6 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dbe0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 5E F6 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf6
        __asm _emit 0x01
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E380 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_0040e380_0040E380() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43a107h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 41 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 F3 5E FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 E1 5E FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43d138h
        push 44dbd4h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 45 F9 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dbd8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 32 F9 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 118h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 11ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 14h], 4
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 1
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
